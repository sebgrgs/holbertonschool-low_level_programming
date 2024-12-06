#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: the number of arguments
 * @av: the arguments
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

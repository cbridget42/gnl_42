/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:10:42 by cbridget          #+#    #+#             */
/*   Updated: 2021/10/23 17:12:56 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*my_realloc(char *result, unsigned int *size, int mod);
void	end_logic(char **result, int error, int i);
char	*clear_end(char *result);
char	*create_result(unsigned int *j, int *error, int *tmp_fd, char *letter);
char	*some_more_functions(unsigned int i, unsigned int size,
			char *result, int error);
char	*my_realloc_two(char *result, unsigned int *size);

#endif

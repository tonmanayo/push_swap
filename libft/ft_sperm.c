/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sperm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 14:06:27 by tmack             #+#    #+#             */
/*   Updated: 2016/06/19 12:47:23 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

const char *ft_sperm(struct stat *mode) 
{
	int i;

	i = 0;
    static char local_buff[16] = {0};
	S_ISDIR(mode->st_mode) ? (local_buff[i] = 'd') : (local_buff[i] = '-');
	i++;
    (mode->st_mode & S_IRUSR) && (mode->st_mode & S_IREAD) ?\
	   	(local_buff[i] = 'r') && i++  : (local_buff[i] = '-') && i++;
    (mode->st_mode & S_IWUSR) && (mode->st_mode & S_IWRITE) ?\
	   	(local_buff[i] = 'w') && i++ : (local_buff[i] = '-') && i++;
    (mode->st_mode & S_IXUSR) && (mode->st_mode & S_IEXEC)?\
		(local_buff[i] = 'x') && i++ : (local_buff[i] = '-') && i++;
    (mode->st_mode & S_IRGRP) && (mode->st_mode & S_IREAD) ?\
		(local_buff[i] = 'r') && i++ : (local_buff[i] = '-') && i++;
    (mode->st_mode & S_IWGRP) && (mode->st_mode & S_IWRITE) ?\
	   	(local_buff[i] = 'w') && i++ : (local_buff[i] = '-') && i++;
    (mode->st_mode & S_IXGRP) && (mode->st_mode & S_IEXEC) ?\
		(local_buff[i] = 'x') && i++ : (local_buff[i] = '-') && i++;
    (mode->st_mode & S_IROTH) && (mode->st_mode & S_IREAD) ?\
	   	(local_buff[i] = 'r') && i++ : (local_buff[i] = '-') && i++;
    (mode->st_mode & S_IWOTH) && (mode->st_mode & S_IWRITE) ?\
	   	(local_buff[i] = 'w') && i++ : (local_buff[i] = '-') && i++;
    (mode->st_mode & S_IXOTH) && (mode->st_mode & S_IEXEC) ?\
	   	(local_buff[i] = 'x') && i++ : (local_buff[i] = '-') && i++;
    return local_buff;
}

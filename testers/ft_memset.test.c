/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:01:34 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/26 09:35:33 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(char *s, int c, size_t n)
{
	printf("Given ptr: %p\n", s);
	printf("Before memset: %s\n", s);
	void *ptr = memset(s + 5, c, n);
	printf("After memset: %s\n", s);
	printf("ptr: %p\n", ptr);
		
	printf("\n");
}

void	ft_test_func(char *s, int c, size_t n)
{
	printf("Given ptr: %p\n", s);
	printf("Before ft_memset: %s\n", s);
	void *ptr = ft_memset(s + 5, c, n);
	printf("After ft_memset: %s\n", s);
	printf("ptr: %p\n", ptr);
		
	printf("\n");
}


void	testcase()
{	
	char	s[50] = "The only way";
	char	ft_s[50] = "The only way";
	test_func(s, '.', 5);
	ft_test_func(ft_s, '.', 5);
}

int	main(int argc, char *argv[])
{
	if(argc == 4)
	{
		// needs strdup to test this xd
		char *c = argv[2];
		test_func(argv[1], c[0], (unsigned long)atoi(argv[3]));
		ft_test_func(argv[1], c[0], (unsigned long)atoi(argv[3]));
	}
	else
	{
		testcase();
	}
}
  
// void printArray(int arr[], int n) 
// { 
//    for (int i=0; i<n; i++) 
//       printf("%d ", arr[i]); 
// } 
  
// int main() 
// { 
//     int n = 10; 
//     int arr[n]; 
  
//     // Fill whole array with 0. 
//     memset(arr, 2, n*sizeof(arr[0])); 
//     printf("Array after memset()\n"); 
//     printArray(arr, n); 
  
//     return 0; 
// } 
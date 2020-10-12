/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2xn타일링.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:51:20 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/12 16:31:14 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int arr[1001]

int ft_count(int size)
{
	int i;

	i = 3;
	while (i <= size)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		if (i != size)
			i++;
	}
	if (i == size)
		return arr[size];
}

int main()
{
	int n;

	cin >> n;
	arr[1] = 1;
	arr[2] = 2;
	if (n == 1 || n == 2)
		cout << n << endl;
	else
		cout << ft_count(n) << endl;
	reutrn (0);
}

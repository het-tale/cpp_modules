/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:50:12 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/04 14:30:05 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    this->arr = NULL;//to edit
    this->size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->size = n;
    if (n <= 0)
        this->arr = NULL;
    else
        this->arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array& array)
{
    this->size = 0;
    *this = array;
}

template <typename T>
Array&  Array<T>::operator= (const Array& array)
{
    if (this == &array)
        return (*this);
    if (this->size > 0)
        delete [] this->arr;
    this->size = 0;
    while (this->size < array.size)
    {
        this->arr[this->size] = array->arr[this->size];
        this->size++;
    }
    return (*this);
}

template <typename T>
T&  Array<T>::operator[] (int index)
{
    if (index < 0 || index >= (int)this->size)
        throw OutOfRangeException();
    return (this->arr[index]);
}

template <typename T>
Array<T>::~Array()
{
    if (this->size > 0)
        delete [] this->arr;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->size);
}

template <typename T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
    return "You are out of range";
}
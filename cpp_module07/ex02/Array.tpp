/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:50:12 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/07 00:18:08 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    this->arr = NULL;
    this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_size = n;
    if (n <= 0)
        this->arr = NULL;
    else
        this->arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array& array)
{
    this->_size = 0;
    *this = array;
}

template <typename T>
Array<T>&  Array<T>::operator= (const Array& array)
{
    if (this == &array)
        return (*this);
    if (this->_size > 0)
        delete [] this->arr;
    this->_size = 0;
    this->arr = new T[array._size];
    while (this->_size < array._size)
    {
        this->arr[this->_size] = array.arr[this->_size];
        this->_size++;
    }
    return (*this);
}

template <typename T>
T&  Array<T>::operator[] (int index)
{
    if (index < 0 || index >= (int)this->_size)
        throw OutOfRangeException();
    return (this->arr[index]);
}

template <typename T>
Array<T>::~Array()
{
    if (this->_size > 0)
        delete [] this->arr;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->_size);
}

template <typename T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
    return "You are out of range";
}
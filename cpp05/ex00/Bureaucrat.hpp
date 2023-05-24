/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:38:05 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:26:52 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include<string>

class Bureaucrat
{
private:
	const std::string name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat& operator=(const Bureaucrat& obj);
	std::string getName() const;
	int getGrade() const;
	void setGrade(int new_grade);
	void increment();
	void decrement();
	class GradeTooHighException:public std::exception
	{
		public:
		virtual const char * what() const throw(){
			return ("The Grade is too High");
		};
	};
	class GradeTooLowException:public std::exception
	{
		public:
		virtual const char * what() const throw(){
			return ("The Grade is too Low");
		};
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
#endif

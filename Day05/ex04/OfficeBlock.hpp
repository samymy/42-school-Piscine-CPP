/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:35:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/10 15:35:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
	Intern*			_intern;
	Bureaucrat*		_signer;
	Bureaucrat*		_executor;

	OfficeBlock(const OfficeBlock & officeBlock);
	OfficeBlock & operator=(const OfficeBlock & officeBlock);

public:

	class InternAbsent : public std::exception {
	public:
		InternAbsent();
		InternAbsent(const InternAbsent &);
		~InternAbsent() throw();
		InternAbsent &	operator=(const InternAbsent &);
		virtual const char* what() const throw();
	};

	class SignerAbsent : public std::exception {
	public:
		SignerAbsent();
		SignerAbsent(const SignerAbsent &);
		~SignerAbsent() throw();
		SignerAbsent &	operator=(const SignerAbsent &);
		virtual const char* what() const throw();
	};

	class ExecutorAbsent : public std::exception {
	public:
		ExecutorAbsent();
		ExecutorAbsent(const ExecutorAbsent &);
		~ExecutorAbsent() throw();
		ExecutorAbsent &	operator=(const ExecutorAbsent &);
		virtual const char* what() const throw();
	};

	OfficeBlock();
	OfficeBlock(Intern* intern, Bureaucrat* signer, Bureaucrat* executor);

	~OfficeBlock();

	void			setIntern(Intern* intern);
	void			setSigner(Bureaucrat* signer);
	void			setExecutor(Bureaucrat* executor);

	void			doBureaucracy(const std::string & formName, const std::string & formTarget);
};

#endif
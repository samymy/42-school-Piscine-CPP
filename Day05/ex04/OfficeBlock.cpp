/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:35:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/10 15:35:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(0), _signer(0), _executor(0) {}

OfficeBlock::OfficeBlock(const OfficeBlock & officeBlock)
{
	*this = officeBlock;
}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor) :
	_intern(intern), _signer(signer), _executor(executor)
{}

OfficeBlock::~OfficeBlock() {}

OfficeBlock & OfficeBlock::operator=(const OfficeBlock & officeBlock)
{
	_intern = officeBlock._intern;
	_signer = officeBlock._signer;
	_executor = officeBlock._executor;

	return *this;
}

void OfficeBlock::setIntern(Intern *intern)
{
	_intern = intern;
}

void OfficeBlock::setSigner(Bureaucrat *signer)
{
	_signer = signer;
}

void OfficeBlock::setExecutor(Bureaucrat *executor)
{
	_executor = executor;
}

void OfficeBlock::doBureaucracy(const std::string & formName, const std::string & formTarget)
{
	Form*	form;

	if (!_intern)
		throw OfficeBlock::InternAbsent();
	if (!_signer)
		throw OfficeBlock::SignerAbsent();
	if (!_executor)
		throw OfficeBlock::ExecutorAbsent();

	form = _intern->makeForm(formName, formTarget);
	_signer->signForm(*form);
	_executor->executeForm(*form);

	delete form;
}

OfficeBlock::InternAbsent::InternAbsent() {}

OfficeBlock::InternAbsent::InternAbsent(const InternAbsent & internAbsent) {
	*this = internAbsent;
}

OfficeBlock::InternAbsent::~InternAbsent() throw() {}

OfficeBlock::InternAbsent & OfficeBlock::InternAbsent::operator=(const InternAbsent & internAbsent)
{
	(void)internAbsent;
	return *this;
}

const char* OfficeBlock::InternAbsent::what() const throw()
{
	return "Intern is absent";
}

OfficeBlock::SignerAbsent::SignerAbsent() {}

OfficeBlock::SignerAbsent::SignerAbsent(const SignerAbsent & signerAbsent) {
	*this = signerAbsent;
}

OfficeBlock::SignerAbsent::~SignerAbsent() throw() {}

OfficeBlock::SignerAbsent & OfficeBlock::SignerAbsent::operator=(const SignerAbsent & signerAbsent) {
	(void)signerAbsent;
	return *this;
}

const char* OfficeBlock::SignerAbsent::what() const throw() {
	return "Signer is absent";
}

OfficeBlock::ExecutorAbsent::ExecutorAbsent() {}

OfficeBlock::ExecutorAbsent::ExecutorAbsent(const ExecutorAbsent & executorAbsent) {
	*this = executorAbsent;
}

OfficeBlock::ExecutorAbsent::~ExecutorAbsent() throw() {}

OfficeBlock::ExecutorAbsent & OfficeBlock::ExecutorAbsent::operator=(const ExecutorAbsent & executorAbsent) {
	(void)executorAbsent;
	return *this;
}

const char* OfficeBlock::ExecutorAbsent::what() const throw() {
	return "Executor is absent";
}
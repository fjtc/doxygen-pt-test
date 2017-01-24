/*
 * Namespaces.h
 *
 *  Created on: 23 de jan de 2017
 *      Author: fjtc
 */

#ifndef NAMESPACES_H_
#define NAMESPACES_H_

/** Namespace A */
namespace NamespaceA {

/** Classe A do namespace NamespaceA. */
class A {

public:
	/**
	 * Enumeração.
	 */
	enum Enum{
		/** Enumerador A */
		ENUN_A,
		/** Enumerador B */
		ENUN_B};
};

}

/** Namespace B */
namespace NamespaceB {

/** Classe B do namespace NamespaceB. */
class B {};

}


#endif /* NAMESPACES_H_ */

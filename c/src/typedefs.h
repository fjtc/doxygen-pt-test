/**
 * @file
 * @brief Arquivo com definição de tipos.
 *
 * Este arquivo contém as definições de tipos.
 * @since 2017.01.20
 * @author FJTC
 */
#ifndef TYPEDEFS_H_
#define TYPEDEFS_H_


/**
 * Tipo 1.
 *
 * Descrição do tipo 1.
 * @ingroup grupo1
 */
typedef int TIPO1;

/**
 * Tipo 2.
 *
 * Descrição do tipo 2.
 * @ingroup grupo1
 */
typedef int TIPO2;


/**
 * Tipo 3.
 *
 * Descrição do tipo 3.
 * @ingroup grupo2
 * @see TIPO2
 */
typedef int TIPO3;

/**
 * Tipo para função 1.
 *
 * Descrição do tipo 1.
 * @return Um inteiro.
 * @ingroup grupo1
 */
typedef int (*funcao1_t)();

/**
 * Tipo para função 2.
 *
 * Descrição do tipo 2.
 * @param[in] a Parametro a.
 * @return Um inteiro.
 * @ingroup grupo1
 */
typedef int (*funcao2_t)(int a);

/**
 * Tipo para função 3.
 *
 * Descrição do tipo 3.
 * @param[in,out] a Parametro a.
 * @return Um inteiro.
 * @ingroup grupo2
 */
typedef int (*funcao2_t)(int * a);

/**
 * Enumeração 1.
 * @ingroup grupo1
 */
enum ENUM1 {
	/**
	 * Valor A.
	 */
	ENUM1_A,
	/**
	 * Valor B.
	 */
	ENUM1_B
};


#endif /* TYPEDEFS_H_ */

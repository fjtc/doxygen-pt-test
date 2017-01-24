/*
 * LegendDocs.h
 *
 *  Created on: 23 de jan de 2017
 *      Author: fjtc
 */

#ifndef LEGENDDOCS_H_
#define LEGENDDOCS_H_

/*! Classe oculta por causa da truncagem */
class Invisible { };
/*! Classe Truncated, relação de herança está oculta */
class Truncated : public Invisible { };
/* Classe não documentada com os comentários do Doxygen */
class Undocumented { };
/*! Classe possui que possui uma relação de herança pública */
class PublicBase : public Truncated {
public:
	virtual ~PublicBase() {}

	/*! Função virtual. */
	virtual int virtualMethod() { return 0; };

	/*! Função puramente virtual. */
	virtual int pureVirtualMethod() = 0;
};
/*! Um template de classe */
template<class T> class Templ { };
/*! Classe possui que possui uma relação de herança protegida  */
class ProtectedBase { };
/*! Classe possui que possui uma relação de herança privada  */
class PrivateBase { };
/*! Classe utilizada pela classe Inherited */
class Used { };
/*! Super classe que herda outras classes */
class Inherited : public PublicBase,
                  protected ProtectedBase,
                  private PrivateBase,
                  public Undocumented,
                  public Templ<int>
{
  public:
    Used *m_usedClass;

    virtual ~Inherited();

	virtual int virtualMethod() { return 0; }

	virtual int pureVirtualMethod() { return 0; }
};

#endif /* LEGENDDOCS_H_ */

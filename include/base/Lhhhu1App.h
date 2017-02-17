#ifndef LHHHU1APP_H
#define LHHHU1APP_H

#include "MooseApp.h"

class Lhhhu1App;

template<>
InputParameters validParams<Lhhhu1App>();

class Lhhhu1App : public MooseApp
{
public:
  Lhhhu1App(InputParameters parameters);
  virtual ~Lhhhu1App();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* LHHHU1APP_H */

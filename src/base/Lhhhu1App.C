#include "Lhhhu1App.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

template<>
InputParameters validParams<Lhhhu1App>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

Lhhhu1App::Lhhhu1App(InputParameters parameters) :
    MooseApp(parameters)
{
  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  Lhhhu1App::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  Lhhhu1App::associateSyntax(_syntax, _action_factory);
}

Lhhhu1App::~Lhhhu1App()
{
}

// External entry point for dynamic application loading
extern "C" void Lhhhu1App__registerApps() { Lhhhu1App::registerApps(); }
void
Lhhhu1App::registerApps()
{
  registerApp(Lhhhu1App);
}

// External entry point for dynamic object registration
extern "C" void Lhhhu1App__registerObjects(Factory & factory) { Lhhhu1App::registerObjects(factory); }
void
Lhhhu1App::registerObjects(Factory & factory)
{
}

// External entry point for dynamic syntax association
extern "C" void Lhhhu1App__associateSyntax(Syntax & syntax, ActionFactory & action_factory) { Lhhhu1App::associateSyntax(syntax, action_factory); }
void
Lhhhu1App::associateSyntax(Syntax & /*syntax*/, ActionFactory & /*action_factory*/)
{
}

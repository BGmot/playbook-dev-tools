
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_activation_ActivationGroupID__
#define __java_rmi_activation_ActivationGroupID__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace activation
      {
          class ActivationGroupID;
          class ActivationSystem;
      }
      namespace server
      {
          class UID;
      }
    }
  }
}

class java::rmi::activation::ActivationGroupID : public ::java::lang::Object
{

public:
  ActivationGroupID(::java::rmi::activation::ActivationSystem *);
  virtual ::java::rmi::activation::ActivationSystem * getSystem();
  virtual jint hashCode();
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::String * toString();
public: // actually package-private
  static const jlong serialVersionUID = -1648432278909740833LL;
  ::java::rmi::activation::ActivationSystem * __attribute__((aligned(__alignof__( ::java::lang::Object)))) system;
  ::java::rmi::server::UID * uid;
public:
  static ::java::lang::Class class$;
};

#endif // __java_rmi_activation_ActivationGroupID__
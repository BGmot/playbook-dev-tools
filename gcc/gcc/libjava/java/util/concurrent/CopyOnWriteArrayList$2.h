
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_CopyOnWriteArrayList$2__
#define __java_util_concurrent_CopyOnWriteArrayList$2__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::util::concurrent::CopyOnWriteArrayList$2 : public ::java::lang::Object
{

public: // actually package-private
  CopyOnWriteArrayList$2(::java::util::concurrent::CopyOnWriteArrayList *);
public:
  jboolean hasNext();
  ::java::lang::Object * next();
  void remove();
public: // actually package-private
  JArray< ::java::lang::Object * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) iteratorData;
  jint currentElement;
  ::java::util::concurrent::CopyOnWriteArrayList * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_CopyOnWriteArrayList$2__

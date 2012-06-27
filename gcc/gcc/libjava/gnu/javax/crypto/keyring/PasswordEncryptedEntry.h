
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_keyring_PasswordEncryptedEntry__
#define __gnu_javax_crypto_keyring_PasswordEncryptedEntry__

#pragma interface

#include <gnu/javax/crypto/keyring/MaskableEnvelopeEntry.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace keyring
        {
            class PasswordEncryptedEntry;
            class Properties;
        }
        namespace mode
        {
            class IMode;
        }
      }
    }
  }
}

class gnu::javax::crypto::keyring::PasswordEncryptedEntry : public ::gnu::javax::crypto::keyring::MaskableEnvelopeEntry
{

public:
  PasswordEncryptedEntry(::java::lang::String *, ::java::lang::String *, jint, ::gnu::javax::crypto::keyring::Properties *);
private:
  PasswordEncryptedEntry();
public:
  static ::gnu::javax::crypto::keyring::PasswordEncryptedEntry * decode(::java::io::DataInputStream *, JArray< jchar > *);
  static ::gnu::javax::crypto::keyring::PasswordEncryptedEntry * decode(::java::io::DataInputStream *);
  virtual void decrypt(JArray< jchar > *);
  virtual void encrypt(JArray< jchar > *);
  virtual void encode(::java::io::DataOutputStream *, JArray< jchar > *);
public: // actually protected
  virtual void encodePayload();
private:
  ::gnu::javax::crypto::mode::IMode * getMode(JArray< jchar > *, jint);
  static ::java::util::logging::Logger * log;
public:
  static const jint TYPE = 1;
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_keyring_PasswordEncryptedEntry__
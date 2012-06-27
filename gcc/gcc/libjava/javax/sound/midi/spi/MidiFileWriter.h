
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_spi_MidiFileWriter__
#define __javax_sound_midi_spi_MidiFileWriter__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace midi
      {
          class Sequence;
        namespace spi
        {
            class MidiFileWriter;
        }
      }
    }
  }
}

class javax::sound::midi::spi::MidiFileWriter : public ::java::lang::Object
{

public:
  MidiFileWriter();
  virtual JArray< jint > * getMidiFileTypes() = 0;
  virtual JArray< jint > * getMidiFileTypes(::javax::sound::midi::Sequence *) = 0;
  virtual jboolean isFileTypeSupported(jint);
  virtual jboolean isFileTypeSupported(jint, ::javax::sound::midi::Sequence *);
  virtual jint write(::javax::sound::midi::Sequence *, jint, ::java::io::OutputStream *) = 0;
  virtual jint write(::javax::sound::midi::Sequence *, jint, ::java::io::File *) = 0;
  static ::java::lang::Class class$;
};

#endif // __javax_sound_midi_spi_MidiFileWriter__
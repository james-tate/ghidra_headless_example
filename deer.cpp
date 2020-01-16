#include "base.h"

class Deer:Base{
public:

    Deer(){
      setName("Bambi");
    }

    virtual ~Deer(){
      return;
    }
};

Deer* makeDeer(){
  return new Deer();
}
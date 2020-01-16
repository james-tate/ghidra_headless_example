#include "base.h"

class Monkey:Base{
public:

    Monkey(){
      setName("George");
    }

    virtual ~Monkey(){
      return;
    }
};

Monkey* makeMonkey(){
  return new Monkey();
}
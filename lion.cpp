#include "base.h"

class Lion:Base{
public:

    Lion(){
      setName("Simba");
    }

    virtual ~Lion(){
      return;
    }
};

Lion* makeLion(){
  return new Lion();
}
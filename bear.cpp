#include "base.h"

class Bear:Base{
public:

    Bear(){
      setName("Baloo");
    }

    virtual ~Bear(){
      return;
    }
};

Bear* makeBear(){
  return new Bear();
}
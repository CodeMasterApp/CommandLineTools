#pragma once
#include <SDL.h>

class EventReceiver {
public:
  virtual bool HandleEvent(const SDL_Event* Event) {
    return false;
  }
};
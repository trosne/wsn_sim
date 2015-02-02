#pragma once
#include "Runnable.h"
#include <vector>
#include <stdint.h>

class Runnable;

class SimEnv
{
public:
  SimEnv();
  ~SimEnv();

  uint32_t getTimestamp(void){ return mTime; }
  void attachRunnable(Runnable* runnable);

  void step(uint32_t deltaTime = 1);

private:
  uint32_t mTime;
  std::vector<Runnable*> mRunnables;
};


#pragma once
#include "stdafx.h"
#include "Cd.h"

class Classic : public Cd {
   public:
      Classic();
      Classic(const char * str, const char * s1, const char * s2, int n, double x);
      virtual void Report() const;
      Classic & operator=(const Classic & S);
      ~Classic();
   private:
      const int prMAX = 50;
      char *primary;
};

#include "Constants.h"
#include "Segment.h"
#include "Observations.h"
#include "Segmentor.h"



void CallSegmentorPoisson(int *Size, int *KMax, int *Data, int *Breakpoints, double *Parameters, double *Likelihood);
void CallSegmentorBinNeg(int *Size, int *KMax, double *theta, int *Data, int *Breakpoints, double *Parameters, double *Likelihood);
void CallSegmentorNormal(int *Size, int *KMax, double *Data, int *Breakpoints, double *Parameters, double *Likelihood);
void CallSegmentorVariance(int *Size, int *KMax, double *mu, double *Data, int *Breakpoints, double *Parameters, double *Likelihood);

#define F (1 << 14)

/* fixed point arithmetic routines here */
/* x and y denote fixedpoint numbers */
/* n is an integer */
int int2fp (int n);
int fp2int_round (int x);
int fp2int (int x);
int addfp (int x, int y);
int addint (int x, int n);
int subfp (int x, int y);
int subint (int x, int n);
int multfp (int x, int y);
int multint (int x, int y);
int divfp (int x, int y);
int divint (int x, int n);

int 
int2fp (int n)
{
  return n * F;
}

int 
fp2int_round (int x)
{
  if (x >= 0)
    return (x + F / 2) / F;
  else
    return (x - F / 2) / F;
}

int 
fp2int (int x)
{
  return x / F;
}

int 
addfp (int x, int y)
{
  return x + y;
}

int 
subfp (int x, int y)
{
  return x - y;
}

int 
addint (int x, int n)
{
  return x + int2fp (n);
}

int 
subint (int x, int n)
{
  return x - int2fp (n);
}

int 
multfp (int x, int y)
{
  return ((int64_t) x) * y / F;
}

int 
multint (int x, int n)
{
  return x * n;
}

int 
divfp (int x, int y)
{
  return ((int64_t) x) * F / y;
}

int 
divint (int x, int n)
{
  return x / n;
}
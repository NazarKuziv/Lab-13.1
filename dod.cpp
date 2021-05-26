#include "dod.h"
#include "var.h" 

using namespace nsVar;

void nsDod::dod() {
	double R = x * (n - 1.) / n;
	a *= R;
}
// Copyright Hugh Perkins 2015 hughperkins at gmail
//
// This Source Code Form is subject to the terms of the Mozilla Public License, 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.

#include <iostream>

#include "SGDMaker.h"
#include "SGD.h"

using namespace std;

#undef STATIC
#undef VIRTUAL
#define STATIC
#define VIRTUAL

VIRTUAL Trainer *SGDMaker::instance( OpenCLHelper *cl, NeuralNet *net ) {
    return new SGD( cl, net );
}


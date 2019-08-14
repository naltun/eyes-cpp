// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.
#include <iostream>
#include <sstream>
#include <signal.h>
#include <cpr/cpr.h>
#include "eyes.h"

using namespace std;

int main() {
    signal(SIGINT, handler);
    run();
}

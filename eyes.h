// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.
#ifndef EYES_H
#define EYES_H
#endif

using namespace std;

/************
* Variables *
************/

const char *banner =
	"  _____\n"
	" |  ___|\n"
	" | |__ _   _  ___  ___\n"
	" |  __| | | |/ _ \\/ __|\n"
	" | |__| |_| |  __/\\__ \\\n"
	" \\____/\\__, |\\___||___/ v0.0.3\n"
	"        __/ | Now made with C++!\n"
	"       |____/\n";

const char *menu =
    "1.  Whois Lookup\n"
    "2.  DNS Lookup + CloudFlare detector\n"
    "3.  Zone Transfer\n"
    "4.  Port Scan\n"
    "5.  HTTP Header Grabber\n"
    "6.  Honeypot Detector\n"
    "7.  Robots.txt Scanner\n"
    "8.  Link Grabber\n"
    "9.  IP Location Finder\n"
    "10. Traceroute\n"
    "11. Domain-to-IP Lookup\n"
    "12. About program\n"
    "13. Exit program\n";

/************
* Functions *
************/

void eyes() {
    cout << "What do you want to do?" << endl;
}

void display() {
    cout << banner << "\n";
    cout << menu << "\n";
    eyes();
}

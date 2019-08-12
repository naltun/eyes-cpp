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
	" \\____/\\__, |\\___||___/ v0.0.9\n"
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
    std::string choice;
    cout << "What do you want to do? ";
    cin >> choice;

    if (choice == "1")
    {
        std::string target;
        std::ostringstream url;
        cout << "Enter a domain or IP address: ";
        cin >> target;
        url << "http://api.hackertarget.com/whois/?q=" << target;

        // Need to add try/catch
        auto r = cpr::Get(cpr::Url{url.str()});
        cout << r.text << endl;

        eyes();
    }

    else if (choice == "12")
    {
        cout << "This program was created by Noah Altunian, and was adapted ";
        cout << "from github.com/naltun/eyes.sh. It is licensed under the ";
        cout << "terms of the MPL v. 2.0.\n" << endl;
        eyes();
    }

    else if (choice == "13")
    {
        cout << "Bye" << endl;
        exit(0);
    }

    else
    {
        cout << "Your choice is invalid.\n" << endl;
        eyes();
    }
}

void run() {
    cout << banner << "\n";
    cout << menu << "\n";
    eyes();
}

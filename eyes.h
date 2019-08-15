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
	" \\____/\\__, |\\___||___/ v0.0.17\n"
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

void handler(int sig) {
    cout << "\nBye" << endl;
    exit(0);
}

std::string get_info(std::string url) {
    auto r = cpr::Get(cpr::Url{url});
    if (r.status_code >= 400)
    {
        std::string err = "\nSomething went wrong.\n";
        return err;
    }

    else
    {
        return r.text;
    }
}

void eyes() {
    std::string choice;
    std::string resp;
    std::string target;
    std::ostringstream url;

    cout << menu << endl;
    cout << "What do you want to do? ";
    cin >> choice;

    if (choice == "1")
    {
        cout << "Enter a domain or IP address: ";
        cin >> target;
        url << "http://api.hackertarget.com/whois/?q=" << target;
        resp = get_info(url.str());
        cout << resp << endl;

        eyes();
    }

    else if (choice == "3")
    {
        cout << "Enter a domain or IP address: ";
        cin >> target;
        url << "http://api.hackertarget.com/zonetransfer/?q=" << target;
        resp = get_info(url.str());
        cout << resp << endl;

        eyes();
    }

    else if (choice == "4")
    {
        cout << "Enter a domain or IP address: ";
        cin >> target;
        url << "http://api.hackertarget.com/nmap/?q=" << target;
        resp = get_info(url.str());
        cout << resp << endl;

        eyes();
    }

    else if (choice == "5")
    {
        cout << "Enter a domain or IP address: ";
        cin >> target;
        url << "http://api.hackertarget.com/httpheaders/?q=" << target;
        resp = get_info(url.str());
        cout << resp << endl;

        eyes();
    }

    else if (choice == "7")
    {
        cout << "This feature makes a direct call to the target -- would you like to continuye? [Y/n] ";
        cin >> choice;
        if (choice == "y")
        {
            cout << "Enter domain (without protocol): ";
            cin >> target;
            url << "http://" << target << "/robots.txt";
            resp = get_info(url.str());
            cout << resp << endl << endl;

            eyes();
        }

        else if (choice == "n")
        {
            cout << "Going back to menu..." << endl << endl;
            eyes();
        }

        else
        {
            cout << "Your choice is invalid." << endl << endl;
            eyes();
        }
        
    }

    else if (choice == "9")
    {
        cout << "Enter IP address: ";
        cin >> target;
        url << "http://ipinfo.io/" << target << "/geo";
        resp = get_info(url.str());
        cout << resp << endl << endl;

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
    cout << banner << endl;
    eyes();
}

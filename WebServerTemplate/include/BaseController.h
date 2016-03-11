#pragma once

#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>

using namespace Poco::Net;
using namespace std;

class BaseController : public HTTPRequestHandler
{
public:
	void handleRequest(HTTPServerRequest &req, HTTPServerResponse &resp);
};
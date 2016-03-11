#include "include/WebServerRouting.h"

WebServerRouting::WebServerRouting()
{
}

WebServerRouting::~WebServerRouting()
{
}

HTTPRequestHandler* WebServerRouting::createRequestHandler(const HTTPServerRequest& request)
{
	if (request.getURI() == "/")
		return new RootController();
	else
		return new RootController();
}
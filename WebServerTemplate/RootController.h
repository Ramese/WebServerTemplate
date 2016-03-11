#include "BaseController.h"

#pragma once

class RootController : public BaseController
{
	
public:
	RootController();

	virtual void handleRequest(HTTPServerRequest &req, HTTPServerResponse &resp);

	static int count;
};
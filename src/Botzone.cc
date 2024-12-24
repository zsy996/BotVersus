#include "wfrest/HttpServer.h"
#include <iostream>
#include <string>

int main() {
    wfrest::HttpServer svr;
    svr.POST("/Botzone/register",[](const wfrest::HttpReq *req,const wfrest::HttpResp *resp) {
        std::cerr << req -> body();
    });

    if(svr.start(8888) == 0) {
        std::getchar();
        svr.stop();
    } else {
        std::cerr << "start server failed!";
        exit(1);
    }

    return 0;
}
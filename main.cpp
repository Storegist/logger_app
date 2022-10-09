/*our application's code*/
#include <iostream>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

int main(){

    //this is output message to the terminal
    
    spdlog::info("Hello world!");
    
    //log message to file
    
    try {
        auto mylogger = spdlog::basic_logger_mt("mylogger", "logs.txt");
        mylogger->info("Hello world!");
    
    } catch(const spdlog::spdlog_ex &ex) {
    
        std::cout << ex.what() <<std::endl;
    }

}

# TLoL: Replay Scraper

## About

This project uses the LViewLoL platform to extract fully detailed observations
(and infers actions) from a running League of Legends client to construct a
dataset to be used for deep learning. The observations are extracted by
reading the memory of the running League of Legends client and storing them
in a hierarchical data structure. In the future, this project will be expanded
to run with multiple concurrent League clients on the same computer (to
accelerate data gathering as it takes several minutes per game), and to adapt
it to Linux so the process can be run on the cloud to massively accelerate the
dataset generation process.

## Building

You need Visual Studio 2019 to compile this.

Dependencies:

1. python39: dlls and includes are already in project. You need to install python 3.9 for 32bits (Make sure you check the Add to PATH checkbox in the installer: https://www.python.org/ftp/python/3.9.0/python-3.9.0.exe)
3. aws-lambda: dlls and includes are already in project (was used for authentication)
3. directx 11: Must install directx end user runtimes: https://www.microsoft.com/en-us/download/details.aspx?id=35 .Extract this and run dxsetup
4. boost::python. Due to the size of the boost libraries you must download boost yourself:
    1. Download boost 1.75.0 (https://www.boost.org/users/history/version_1_75_0.html)
    2. Unarchive it in LView/boost
5. Compile the app on Release x86 (you need to compile boost::python on debug to compile on debug, which I didn't).
6. Copy Release/ConsoleApplication.exe to LView/ConsoleApplication.exe overwriting the existing file if needed
7. Run LView/ConsoleApplication.exe and have fun!

## Setup
All LView & LView python scripts configurations reside in config.ini file. First you must set the path to the scripts folder with the following config (you can find the config.ini in LView folder):

`::scriptsFolder=\<folder\>`
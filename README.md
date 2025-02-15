<div align="center">
    <a href="https://www.youtube.com/watch?v=Mz7NbIgJqsc"
       target="_blank">
       <img src="http://img.youtube.com/vi/Mz7NbIgJqsc/0.jpg"
            alt="League of Legends Deep Analysis - Setup and Extraction (Part 1)"
            width="240" height="180" border="10" />
    </a>
</div>

# TLoL Scraper

## About

The TLoL Scraper is an application which has been forked from the LViewLoL scripting
platform which is being used to generate machine learning datasets which can be used
to either analyse League of Legends games or to build datasets which can enable the
development of a game playing AI, i.e., a bot which can autonomously play League of
Legends.

## LView - About

LView is a python based scripting platform for League of Legends. The engine is external that means it is not injected into leagues process. The engine is running in a separate process and reads the games state using ReadProcessMemory.

Key features of LView:
  1. Ability to create overlays and automatize gameplay using python scripts
  2. Performant ingame overlays/menus using a combination of directx, direct composition and dear imgui 
  3. Static game data available at runtime. Data is unpacked directly from the game files. Taken from https://www.communitydragon.org/ .
  4. Undetectability. Since LView reads the game state externally the ban probability is close to 0. Currently since the start of the development there is no recorded case of a ban.
  5. A rich set of premade scripts. There are a lot of already implemented and tested gameplay scripts by default in LView and more are to come. Some of these scripts: orbwalker, spell tracker, champion tracker, map awareness, minimap drawings, skillshot drawings... etc 
 
![Screenshot](https://i.imgur.com/IK9SxKd.png)

## LView - Building

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
 ### Setup
 All LView & LView python scripts configurations reside in config.ini file. First you must set the path to the scripts folder with the following config (you can find the config.ini in LView folder):
 
  `::scriptsFolder=\<folder\>`

## Optimized

The release version of the TLoL-Scraper uses an optimized C++ implementation to scrape
replay files which doubles the effective scraping speed over using the Python
interface to save replay data. This is also the same version used in the YouTube
guide. Switch the branch to the `optimized` branch if you want maximum performance
when scraping replays. Use the following code to switch the branch:


```bash
git checkout optimized
```
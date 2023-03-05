## AppHangCrashTest
- This App is useful when you need to simulate a crashing or hanging app to test solutions for these cases. The hang/crash will generate windows Event Log entries like any hanging/freezing app would do.
- Clicking Hang or Crash will generate real Windows Event Log entries.
  - Crash -> Event ID: 1000 / Source: Application Error
  - Hang -> Event ID: 1002 / Source: Application Hang

![Screenshot from 2023-02-13 01-15-58](https://user-images.githubusercontent.com/834010/218369716-e65b02aa-e28c-4d69-8e7f-926f39ba6366.png)

# Building:
- Built using Microsoft Visual Studio 2022 community.

# TODO:
- Check if it works with Windows 7/8/8.1 - if not, how to make it compatible?
- Separate Crash/Hang code into functions to allow:
  - Include command line parameters to crash/hang 

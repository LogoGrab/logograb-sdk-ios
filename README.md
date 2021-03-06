
----------------------------------------------------------

GETTING STARTED WITH THE LOGOGRAB SDK

We guide you through all the steps needed to get started with your own application that uses the LogoGrab SDK:

[YOUR_DIR] will be referred to your workspace throughout this guide.

STEP 1: 
Open the SampleApp project in Xcode. The project implements a basic app using the LogoGrab SDK and illustrates the frameworks you should link to. Also note the “-ObjC” linker flag required when targeting iOS versions lower than 7.0

STEP 2:
Edit the file ViewController.h and assign your SDK Access Key to _DEVKEY

STEP 3:
Customize the behaviour of the SDK in the method btnLaunchLogoGrab in ViewController.m

----------------------------------------------------------

Once you completed the steps above, you're ready to compile and run SampleApp, your first application based on the LogoGrab SDK.

----------------------------------------------------------

CREATING YOUR CUSTOM LOGOGRAB-ENABLED APP

You have total freedom to integrate the LogoGrab functionality inside your own app. Just remember, it is mandatory for the users of your app to tap on the official LogoGrab icon to launch the SDK.

In your own custom app, you might find useful to access the identity of a logo given the ID returned by our SDK upon successful scanning. For this purpose you can use:
http://logograb.com/api/getBrand.json?logoVersionId=[LOGO_VERSION_ID]&developerKey=[YOUR_DEVKEY]

Need to upload missing logos on the LogoGrab platform? You can do so at http://logograb.com/upload

Have fun!

----------------------------------------------------------

-- 
Alessandro Prest<br>
CTO<br>
LogoGrab<br>
http://www.logograb.com<br>
<br>
<br>
E-mail: alessandro@logograb.com<br>
Skype:	alessandro.prest<br>


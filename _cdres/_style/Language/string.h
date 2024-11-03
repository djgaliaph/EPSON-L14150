[Main]
Caption	="Install Navi [%PRODUCT_NAME%]"
BTN_Next	="Next"

;■
BTN_NextStep		="Next"
BTN_StartSetting	="Next"
BTN_Start		="Next"
BTN_Retry 		="Retry"
BTN_Abort		="Skip"
BTN_Recheck		="Reconfirmation"
BTN_Accept		="Accept"
BTN_Exit		="Exit"
BTN_Agree		="Agree"

BTN_Back	="Back"
BTN_Install	="Install"
BTN_Cancel	="Cancel"
BTN_Finish	="Finish"
BTN_Skip	="Skip"
BTN_Apply	="Apply"
BTN_Regist	="Register"
BTN_Restart	="Reset model"
BTN_NWDiag      ="Details"
BTN_Renewal 	="Update"
BTN_Yes         ="Next"
BTN_No          ="Close"
PDM_Language	="Language"
PDM_Support	="Support"
DLG_Cancel	="Are you sure you want to cancel?"
LBL_Printer	="Printer"
LBL_Scanner	="Scanner"
LBL_Printer_L	="printer"
LBL_Scanner_L	="scanner"
LBL_Wifi	="Connect via wireless network (Wi-Fi)"
LBL_Recommended	="(recommended)"

LBL_EnvCheck    ="Checking the system environment..." 
LBL_DelDevMessage  ="Checking the system environment..." 
LBL_DelDevCaution = "Checking may take time. Do not touch the printer and computer." 
LBL_DelDevCaution = ""
LBL_Restart	="To use the software, you need to restart the computer."

[ForMac]
TITLE	="Steps for printer registration"
OptionCbx	="Download the latest software from Epson"
;OptionCbxExp	="Enable installing and updating software that you can available."
Q_ExistMsg	="Currently AirPrint is registered. You can use all functions by registering Epson printer driver. Select the printer driver you want to use."
Q_ExistAPBtn	="AirPrint"
Q_ExistEPBtn	="Epson"
Q_NoExistMsg	="Register the Epson printer driver."
Q_NoExistBtn	="OK"
Q_FailureMsg	="Printer registration is unsuccessful. Click OK, and then register the printer again."
Q_FailureBtn	="OK"
Test_FailureMsg	="Test print is unsuccessful. Register the printer again."
Q_PrinterNotFound ="Printer not found"

[LeftProgress]
STR_Eura	="License Agreement"
STR_SystemCheck	="Select Options"
STR_Install	="Installation"
STR_Connection	="Connection"
STR_AddInstall	="Additional Installation" 
STR_Finish	="Finish"
;■
STR_OpeCheck	="Check Functions"

;■
[eReg_A]
PATHEXE_W	="\Apps\Register\eRegLauncher.exe"
PARAM_W		="/Lang:US"
PATHEXE_M	="/Apps/Register/EpsonRegRedirect.app"

[SupportLink_A]
PATHEXE_M	="/Apps/SupportLink/US/Guide.pkg"

[StartMenu]
TITLE	="Install Navi"
SUB_Title	=""
LNK_Start	="Start & Connection"
HLP_Start	="Click here to start the setup process, install software, and configure network settings."
LNK_Guide	="For System Administrator Use Only"
HLP_Guide	="Click here to see the printer's hardware setup manual (PDF) and other administrative settings."
LNK_Model	="Select your %product%"
HLP_Model	="Please select your %product% from the list."
LNK_Manual	="Information for Manuals and Applications"
HLP_Manual	="Click here to get the information of manuals, the most-used applications such as printer drivers, and paths of these applications that is on this software disc to let you install them manually."

[Assistant]
ASS_NoConnect_Full	="<Information>\nUSB cable connection is available to connect the %product% and computer."
ASS_NoNetwork_Full	="<Information>\nWireless LAN (Wi-Fi) connection is available to connect the %product% and computer."
ASS_NoWiFi_Full		="<Information>\nYou can directly connect the %product% and computer."
ASS_NoWAC_Full		="<Information>\nYou can connect the %product% and computer via network."
ASS_OkWAC_Full		="<Information>\nYou can connect the %product% and computer via wireless LAN (Wi-Fi)."

ASS_NoConnect_OnlyWiFi	="<Information>\nUSB cable connection is available to connect the %product% and computer."
ASS_NoNetwork_OnlyWiFi	="<Information>\nWireless LAN (Wi-Fi) connection is available to connect the %product% and computer."
ASS_NoWiFi_OnlyWiFi	="<Information>\nYou can directly connect the %product% and computer."
ASS_NoWAC_OnlyWiFi	="<Information>\nYou can connect the %product% and computer via network."
ASS_OkWAC_OnlyWiFi	="<Information>\nYou can connect the %product% and computer via wireless LAN (Wi-Fi)."

[SelectModel]
TITLE="Select your %product%"
TXT_Body="Please select your %product% from the list."

[ForAdmin]
TITLE	="For System Administrator Use Only"
SUB_Title	=""
BTN_HSG	="Hardware Setup Guide"

[ViewManual]
TITLE	="Information for Manuals and Applications"
SUB_Title	=""
BTN_Folder	="Manuals"

;■
[LicenseAgreement]
TITLE	="License Agreement"
LNK_Option	="Software Installation Options"
CBX_Agree	="I agree to the terms of this agreement."
ITM_Language	="Language"
;LNK_PP		="Privacy policy"
;URL_PP		="http://www.epson.com/cgi-bin/Store/AboutPrivacyInfo.jsp"
LNK_DETAIL	="About the usage survey"
CONFIRM		="Have you read and accepted the software license agreement?"

[Prepare]
TITLE		="Check the following"
SUB_Title	=""
TXT_Body	=""

[SystemCheck]
TITLE	="Checking the System"
SUB_Title	=""
TXT_CheckPC	="Please wait..."
TXT_CheckNW	="Please wait..."

;■
[InstallOption]
TITLE	="Select Installation Options"
SUB_Title	="Please choose the required setup options."
TXT_Body	=""
CBX_Latest	="Download the latest software from Epson"
HLP_Latest	=""
CBX_Status	="Status monitoring and automatic software updates from Epson %RECOMMENDED%"
CBX_GA		="Send usage information to Epson"
;HLP_GA		="Epson collects usage information to improve software quality using Google Analytics. We never collect personal information. "
;LNK_GA		="Google Analytics"
HLP_GA		="Epson collects usage information to improve the quality of our products and services. We never collect personal information."
LNK_GA		="Click here for details"

[InstallOption_GASub]
TITLE		="Epson would like your assistance in improving our products and services."
CBX_GA		="Allow software usage information to be collected"
HLP_GA		="Epson collects software usage information using Google Analytics."
LNK_GA		="About Google Analytics"
CBX_PL		="Allow product usage information to be collected"
HLP_PL		="Epson collects product usage information using the Epson Customer Research software."
LNK_PL		="About Epson Customer Research software"

[InstallOption_PLURL]
LNK_URL_1          ="http://support.epson.net/PrinterLogger/st3/index.php?seg=cp"
LNK_URL_2          ="http://support.epson.net/PrinterLogger/st3/index.php?seg=bp"
LNK_URL_3          ="http://support.epson.net/PrinterLogger/st3/index.php?seg=cp"
LNK_URL_4          ="http://support.epson.net/PrinterLogger/st3/index.php?seg=scn"
LNK_URL_5          ="http://support.epson.net/PrinterLogger/st3/index.php?seg=lp"
LNK_URL_6          ="http://support.epson.net/PrinterLogger/st3/index.php?seg=sidm"
LNK_URL_7          ="http://support.epson.net/PrinterLogger/st3/index.php?seg=lfp"

[ReInstall]
TITLE	="Install Software"
SUB_Title	=""
RBT_Essentilal = "Re-install required software"
RBT_AddSoft = "Install optional software"
RBT_Exchange ="Set up %product% connection again\n (for new network router or changing USB to network, etc.)  "

[PrinterList]
TITLE	="Select Which to Set Up"
SUB_Title	=""
RBT_First	="%PRODUCT% and Computer"
HLP_First	="The following screens will guide you through the process of setting up the %PRODUCT% for the first time and the computer."
RBT_Adding	="Computer Only"
HLP_Adding	="The following %product%(s) are detected on the network. Select the %product% you want to connect to and click %NEXT%. If the %product% you want to use is not displayed, make sure it is turned on and click Update."
LST_Model	="Product"
LST_MacAddress	="MAC Address"
LST_IPAddress	="IP Address"
LNK_IP_MANUAL	="Advanced configuration"

[IPManualSetup]
TITLE	="Enter the IP address"
SUB_TITLE	=""
TXT_Body	="Automatically generate a fixed IP address port to the network %product%."
ITM_IP	="IP Address:"

[HardwareSetup]
TITLE	="Setting up"
SUB_Title	=""

[InstallEssential]
TITLE	="Installing Required Software"
TITLE_DL	="Downloading Required Software"
SUB_Title	=""
TXT_Body_DL	="Downloading %s..."
TXT_Body_IN	="Installing %s..."
TXT_Body_UD	="The latest %s is available.\nDo you want to install?"

[SelectConnect]
TITLE	="Select Your Connection Method"
SUB_Title	=""
TXT_Body	="Select how you want to connect the %product% to your computer, laptop, or other device."
RBT_Wifi	="%WIFI%"
RBT_WAC	="%WIFI%"
RBT_LAN	="Connect via wired LAN (Ethernet)"
RBT_USB	="Connect via USB cable"

[WifiAutoConnect]
TITLE	="Connect to Wireless LAN Automatically"

;■
[WifiAutoConnectFPC]
TITLE_NO24	="Unable to find the wireless LAN environment"

TITLE_SET24	="Select Wireless LAN SSID and Password"
EXP_SSID	="The network name (SSID) to set to the %product%:"
EXP_PW		="Password:"
NOSSID		="Select an SSID"

MSG_SETSSID	="Connect the %product% to the %s SSID of the wireless LAN router."
MSG_SETSSID2	="Do you want to automatically connect the %product% to this wireless LAN SSID: [%s]?"

MSG_NOSET	="Enter the password."
MSG_ERRPW	="The password is invalid. Enter the correct password."
MSG_ERRWAC5G	="The SSID or password entered for the %product% may not be correct.\nClick [%BACK%] to retry. Click [%NEXT%] to set up with another method."


[WifiAutoConnectError]
TITLE	="Wireless LAN Connection Error"
TITLE_WFD	="Wireless LAN Connection Error"
SUB_Title	=""
TXT_Body	="Unable to connect to your network\nClick [%NEXT%] and select a different network setup method."
TXT_BodyAP	="Unable to connect to your network\nClick [%NEXT%] and select a different network setup method."


[SSIDManualConnect]
TITLE	="Connecting to the Network Manually"
ITM_SSID	="Network name (SSID):"
ITM_PW	="Password:"
BTN_ShowPW	="Display Password"
ITM_PWError	="Could not obtain"
ITM_PWNone	="Unestablished"
LNK_Push	="Push Button Setup for a Wi-Fi Network (WPS) "
ITM_SSID_PC	="5GHz Network name (SSID):"

[EthernetConnect]
TITLE	="Connect via wired LAN (Ethernet)"
SUB_Title	=""
TXT_Body	="Connect the LAN cable."
CAUTION	="Make sure the %PRODUCT% is turned on."

[USBWiredConnect]
TITLE	="Connect Via USB Cable"
SUB_Title	=""
TXT_Body	="Connect the computer and %PRODUCT% with a USB cable."
CAUTION	=""
CBX_Later	="Do not connect now"
GUIDE	="When a USB cable is connected, setup proceeds automatically."

[WifiAutoConnectWithUSB]
CAUTION	="Do not remove the USB cable until instructed to do so."
GUIDE	="When a USB cable is connected, setup proceeds automatically."

;■
[UserSelectConnectWrap]
TITLE ="Select the Network Connection Method"
SUB_Title	=""
LNK_Push	="Connect using WPS button"
LNK_WUSB	="Connect using USB cable"
HLP_WUSB	="Have a USB cable ready."
LNK_Panel	="Connect by entering a network name (SSID) and password manually"
LNK_IFSwitch	="Connect by entering a network name (SSID) and password manually"

[WifiDirectConnect]
TITLE		="Wi-Fi Direct(Simple AP) Connection Setup"
SUB_Title	=""
TXT_Body	="This will establish a direct Wi-Fi connection between this computer and %PRODUCT%.\r\nPlease see manual for further details on Wi-Fi Direct."

[DirectWifiConnect]
TITLE	="Confirm the connection method"
SUB_Title	=""
TXT_Body	="This will establish a direct Wi-Fi connection between this computer and %PRODUCT%.\r\nPlease see manual for further details on AP Mode connection."

[WFDManual]
TITLE	="Wireless Connection Manual Setup"
SUB_Title	=""

[PushButtonConnect]
TITLE	="Connect Using WPS Button"
TXT_Body ="Connect the %product% and wireless router automatically by pressing the wireless router's button."
SUB_Title	=""
LNK_APmode	="Click here if your wireless router does not support the WPS push button function"

[APmodeManualSetting]
TITLE        ="Wireless Connection Manual Setup"

[IPManualConnect]
TITLE	="Network Port Setup"
SUB_Title	=""
TXT_Setting	="Establishing connection...please wait."

[InstallNetwork]
TITLE	="Downloading Network Utilities"
SUB_Title	=""
TXT_Body_DL	="Downloading %s..."
TXT_Body_IN	="Installing %s..."

;■
[ifs_input]
TITLE		="Connecting to the Network Manually"
TXT_Body	=""
INP_SSID	="SSID (2.4GHz):"
INP_PW		="Password:"
PLS_SSID	="Select an SSID"
PLS_PW		="The Wi-Fi network %s requires a password."
ERR_TITLE	="Wireless LAN Connection Error"

[NetworkConnected]
TITLE	="%PRODUCT% Connected to your Network"
SUB_Title	=""
SPINFO	="Remove the USB cable if you used it for the network connection setup."
SPINFO_FUW	="Note: Please keep the USB cable connected until the battery is fully charged."

[LocalConnected]
TITLE	="Setup is Complete"
SUB_Title	=""

;■
[ConnectedGoEnd]　　　　
TITLE2		="After this..."
CKB_Exp1	="Pair the scanner and computer for one-button scanning."

;■
[FWUpdate]
TITLE		="Checking the firmware"
TITLE2		="Updating the firmware"
TXT_Body	="Please wait... Do not turn off."
TXT_Body2	="Please wait. Do not turn off your %product% or computer or the %product% may malfunction."
ERR_ESU		="Start Checking the firmware. Close Epson Software Updater and click [OK]."
ERR_VerCheck	="Unable to check the firmware. Make sure the %product% is turned on and connected to the computer. Then click [Retry]."

;■
[Pairing]
TITLE		="Set up One-Button Scanning"
TXT_Body	="Please wait..."
ERR_Already	="The %product% is paired with another computer. Do you want to pair the %product% with this computer?\nAfter pairing, you can start a scan by pressing the start button on the %product% and your scans will now go to this computer."

;■
[FirstScan]
TITLE		="Test Scanning"

[WaitInitialCharge]
TITLE       	="Checking the initializing status..."
TXT_Body	="When initilalizing inks, wait until it is complete. Do not touch the printer."

[TestPrint]
TITLE	="Prints a test page to check the connection"
SUB_Title	=""
LNK_Utillity	="When the printout quality is poor."
LNK_Lot4	="Information on efficient energy use"
BTN_Print	="Print Test Page"

[Lot4]
TITLE	="Information on efficient energy use"
SUB_Title	=""

[Invitation]
TITLE	="Online Product Registration"
SUB_Title_PRODUCT	="Product Name"
SUB_Title_SERIAL	="Serial Number"
RBT_Install	="Install"
RBT_Disagree	="Do not install"
RBT_Later	="Remind me later"
TXT_Loading	="Now Loading..."
TXT_Body_DL	="Downloading...%s"
TXT_Body_IN	="Installing...%s"
TXT_Region	="Please select your country/region."
TXT_NW_Error	="Cannot connect to the Internet. Please check your connection and try again."

;■
[Finish]
TITLE	="Setup is Complete"
SUB_Title	=""
TXT_Body	="Your %product% is ready to use."
TITLE2		="After this..."
CKB_Exp1	="Check for updated software"
CKB_Exp2	="Online registration for your product"

[Unfinished]
TITLE	="Setup Complete"
SUB_Title	=""
TXT_Body	="Software installation is complete."

[SelectMode]
TITLE		="Download Web Installer"
SUB_Title	="Select how you want to download the Web installer."
TXT_Body	=""
RBT_WebInst	="Install on this computer"
HLP_WebInst	="Install essential software and set up the connection on this computer."
RBT_SaveFile	="Save to a specified destination"
HLP_ SaveFile	="Save essential software to install later or install on a computer that has no access to the Internet."
ITM_Savein	="Save in"
ITM_ Language	="Language"

[SaveFile]
TITLE		="Saving Web Installer"
SUB_Title	=""
TXT_Body	="Downloading...%s"

[SaveFinnish]
TITLE		="Saving Web Installer Complete"
SUB_Title	=""
TXT_Body	="Web Installer has been saved to the following:"
ITM_Savein	="File"
TXT_Read	="Double-Click [InstallNavi.exe] to run the installer."

[SystemError]
TITLE	="Operating System Error"
ERR_Admin	="You need to log on as an administrator to install this software."
ERR_OS	="Your operating system does not support this software."
ERR_HDD	="There is not enough space on your system.\r\nSelect fewer programs for installation, or free up space on your system and install the programs again."

[NWSettingError]
TITLE	="Network Configuration Interrupted"
SUB_Title	="See the troubleshooting below."
TXT_Restart	="The %product% name you have selected may be wrong."

[TimeOutError]
TITLE	="%PRODUCT% Not Found"
SUB_Title	="See the troubleshooting below."
TXT_Restart	="The %product% name you have selected may be wrong."

[AbnomalError]
TITLE	="Network Connection Error"
SUB_Title	="See the troubleshooting below."

[WaitConnect]
TITLE	="Network Setup"
SUB_Title	="Accessing EpsonNet Setup"
TXT_Body	="Please wait..."

[WaitSoftware]
TITLE	="Installing Application Software"
SUB_Title	="Accessing Epson Software Updater"
TXT_Body	="Please wait..."

[NetworkError]
TITLE	="Network Connection Error"
SUB_Title	="The network interface is not available."

[WebDownloadError]
TITLE	="File Download Error"
ERR_Failed	="Failed to connect to the Internet. Check your Internet connection."
ERR_Comm	="Failed to connect to the Internet. Check your Internet connection."
BTN_RETRY	="Retry"

[NWSettingCommon]
NOW_SETTING	="Setup is in progress. Please wait..."

[NWSettingStep]
STEPINFO_BEGIN	="Start Setup"
STEPINFO_EULA	="License Agreement"
STEPINFO_SYSTEMCHECK	="System Check"
STEPINFO_INSTALL	="Installation"
STEPINFO_CONNECTION	="Connection Setting"
STEPINFO_ADDINSTALL	="Additional Installation"
STEPINFO_FINISH	="Finish"
STEPINFO_END	="Setup Complete"

[NWSettingButton]
BUTTON_OK	="OK"
BUTTON_CANCEL	="Cancel"
BUTTON_NEXT	="Next"
BUTTON_BACK	="Back"
BUTTON_SKIP	="Skip"
TEXT_YES	="Yes"
TEXT_NO		="No"

[NWSettingWAC]
TITLE_CS_SIMPLE_AP	="Wi-Fi Auto Connect %PRODUCT% Setup"
STEP0_WAC	="Searching for %PRODUCT%..."
STEP1_WAC	="Setting up the network information for the %product%"
STEP2_WAC	="Checking the connection"
STEP3_WAC	="Adding the network %product% to the computer"
STEP3_WAC_Mac	="Other settings"

[NWSettingTCPIP]
TITLE_TCPIP	="IP Address Settings"
LABEL_TCPIP	="Current IP address for the %product% is set as below. Click [Change] to change the settings, or click [Next] to continue."
LABEL_TCPIP_SETTING	="The IP address for the %product% will be changed as below. Click [Next] to continue.\nYou can undo changes by clicking [Undo]."
RADIO_TCPIP_AUTO	="IP Address Automatic Configuration (DHCP)"
RADIO_TCPIP_MANUAL	="IP Address Manual Configuration (Static address)"
LABEL_TCPIP_IP	="IP Address:"
LABEL_TCPIP_SUBNET	="Subnet Mask:"
LABEL_TCPIP_GATEWAY	="Default Gateway:"
BUTTON_TCPIP_EDIT	="Change"
BUTTON_UNDO	="Undo"
BUTTON_REPROBE	="Search Again"

[NWSettingTCPIPError]
MSG_ILLEGAL_GATEWAY = "Invalid Default Gateway."
MSG_ILLEGAL_GATEWAY_PARE = "The Default Gateway and Subnet Mask combination is invalid."
MSG_ILLEGAL_IP = "Invalid IP address."
MSG_ILLEGAL_IP_PARE = "The IP address and Subnet Mask combination is invalid."
MSG_ILLEGAL_IP_PARE2 = "The IP address and Default Gateway combination is invalid."
MSG_ILLEGAL_SUBNET = "Invalid Subnet Mask."

[NWSettingTCPIPConfirm]
MSG_QUESTION_TCPIP_SETTING	="The configuration method or the IP address for the %product% will be changed.\nContinue?"

[NWSettingStorage]
TITLE_STORAGE_ATTRIBUTE	="File Sharing Setup"
LABEL_STORAGE	="Set write access to external storage devices such as memory cards or USB flash memory that are connected to the %product%.\nDo not access the external storage devices until setup is complete. You can change this setting later."
TEXT_READWRITE	="Wi-Fi/Network"
TEXT_READONLY	="USB"

[NWSettingDriver]
TITLE_PRINTSCAN	="Computer Driver Settings"

[NWSettingProductSearch]
TITLE_PROBE	="Searching for %PRODUCT%..."

[NWSettingNotFoundProducts]
MSG_ERROR_NO_PRINTER_EASYMODE	="%PRODUCT% not found. Click OK and follow the on-screen instructions to run the setup again."

[NWSettingSelectModel]
TITLE_LIST	="Select a %PRODUCT%"
LABEL_LIST	="The following product(s) are found on the network. Select the product you want to use and click [Next]. If the %PRODUCT% you want to use is not displayed, check if it is turned on."
TEXT_MODEL	="Product Name"
TEXT_STATUS	="Status"
TEXT_CONNECTSTYLE	="Connection Type"
TEXT_MAC	="MAC Address"
TEXT_IP	="IP Address"
TEXT_USB	="USB"
TEXT_WIRED_LAN	="Wired LAN"
TEXT_WIRELESS_LAN	="Wireless LAN"
TEXT_SIMPLE_AP	="Simple AP"

[NWSettingUSBWAC]
STEP0_USB	="Enter network information"
STEP1_USB	="Setting up the network information for the %product%"
STEP2_USB	="Checking the connection"
STEP3_USB	="Adding the network %product% to the computer"
LABEL_LOCAL_SETTINGS	="The computer is connected to the following network (SSID). Connect the %product% to the network (SSID)?"
LABEL_LOCAL_SETTINGS_SSID	="Wi-Fi network name (SSID):"
TITLE_SENDING	="Sending Settings"
TITLE_POLLING	="Confirm Connection"

[NWSettingUSBWACError]
MSG_ERROR_GETDETAIL	="An error occurred while communicating with the %product%.\nThere may be a problem with the %product%.\nTry turning off the %product%, and then turning it on to make the settings again."
MSG_ERROR_CONNECTING_5GHZ_FREQUENCY_BAND	="The network channel assigned to your Wi-Fi network is not supported by the %product%. This may disable your %product%'s Wi-Fi connection."

[NWSettingAdminConfirm]
PASSWD_CAPTION	="Password"
GROUP_PASSWD	="Device Logon"
LABEL_PASSWD	="Enter the current administrator password."
LABEL_PASSWD2	="Password:"
TITLE_WIRELESS_SECURITY_AUTO	="Enter Security Key/Password"
MSG_ERROR_SETDETAIL_NOMATCH_PASSWD	="Setting failed because the password is incorrect."

[ButtonText]
BTN_Yes         ="Yes"
BTN_No          ="No"

[NWHzError]
MSG		="Connecting to the printer is unsuccessful because your computer is connected to a 5 GHz SSID that %product% does not support. Connect the computer to a 2.4 GHz SSID, and then select the %product% settings."

[MainManuItem]
TITLE_ABOUT_APPLICATION = "About %@"
TITLE_HIDE_APPLICATION  = "Hide %@"
TITLE_HIDE_OTHERS		= "Hide Others"
TITLE_SHOW_ALL			= "Show All"
TITLE_QUIT_APPLICATION	= "Quit %@"
TITLE_MINIMIZE			= "Minimize"
TITLE_BRING_ALL_FRONT	= "Bring All to Front"
TITLE_WINDOW	= "Window"

[SoftwareUpdate]
MAIN_TITLE		= "Installing Optional Software"
SUB_Title		= ""
COLUMN_TITLE_INSTALL	= "Install"
COLUMN_TITLE_NAME		= "Software"
COLUMN_TITLE_STATE		= "Status"
COLUMN_TITLE_VERSION	= "Version"
COLUMN_TITLE_SIZE		= "Size"
STATE_VALUE_NEW			= "New"
STATE_VALUE_UPDATE		= "Update"
STATE_VALUE_INSTALLED	= "Installed"
BUTTON_NAME_INSTALL		= "Install %d item(s)"
LABEL_TITLE_FREE_SPACE	= "Free space : "
LABEL_TITLE_SUM			= "Total : "
LABEL_TITLE_CHECK		= "Checking for software updates..."
LABEL_TITLE_NO_UPDATE	= "Your software is up-to-date."
LABEL_TITLE_REQUEST		= "Connecting to the server..."
LABEL_TITLE_DOWNLOAD	= "Downloading %s..."
LABEL_TITLE_INSTALL		= "Installing %s..."
LABEL_UNIT_MB		= "GB"
LABEL_UNIT_MB		= "MB"

[SoftwareSelection]
TITLE			="Select the software to install"
CBX_Latest		="Download the latest software from Epson"
LABEL_TITLE_SUM		="Total : "
LABEL_TITLE_FREE_SPACE	="Free space : "
LABEL_TITLE_CHECK	="Checking for software updates..."
LABEL_TITLE_NO_UPDATE	="Your software is up-to-date."
LABEL_TITLE_REQUEST	="Connecting to the server..."
LABEL_TITLE_DOWNLOAD	="Downloading %s..."
LABEL_TITLE_INSTALL	="Installing %s..."
LABEL_UNIT_MB		="MB"
LABEL_UNIT_GB		="GB"
LABEL_STATUS		="Status :"
LABEL_VERSION		="Version :"
LABEL_SIZE		="Size :"
STATUS_NEW		="New"
STATUS_UPDATE		="Update"
STATUS_INSTALLED	="Installed"
HLP_BOTTOM_LIST		="* You cannot select the software that has been installed"
HLP_BOTTOM_LIST2	="Software marked with * (asterisk) has installed and cannot be selected."

[ConfirmDriverInstall]
TXT_Body ="Install an EPSON printer driver. If you are using a third party printer driver, you can click [Skip]."

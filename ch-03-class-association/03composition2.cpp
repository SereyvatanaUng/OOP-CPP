#include<iostream>
#include<vector>
using namespace std;

// Room class
class Room{
  private:
    string roomType;
  
  public:
    // Constructor
    Room(const string& type) : roomType(type){}

    // Getter for room type
    string getRoomType() const {
      return roomType;
    }
};

// House class with coposition relationship
class House {
  private:
    vector<Room> rooms;

  public:
    // Add a room to the houe
    void addRoom(const Room& room) {
      rooms.push_back(room);
    }

    // Display details about the house 
    void displayDetails() const {
      cout << "House details:" << endl;
      for (const Room& room : rooms) {
        cout << "- Room: " << room.getRoomType() << endl;
      }
    }
};

int main() {
  House myHouse;

  // Create Rooms
  Room livingRoom("Living Room");
  Room bedRoom("Bed Room");
  Room kitchen("Kitchen");

  // Add Rooms to the House
  myHouse.addRoom(livingRoom);
  myHouse.addRoom(bedRoom);
  myHouse.addRoom(kitchen);

  // Display House details
  myHouse.displayDetails();

  return 0;
}
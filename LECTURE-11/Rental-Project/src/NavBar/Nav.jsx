import { IoSearchSharp } from "react-icons/io5";
import logo from "../assets/Property Rental Website Using React/p.jpg";
import { FaRegUserCircle } from "react-icons/fa";
import { GiHamburgerMenu } from "react-icons/gi";

const Nav = () => {
  return (
    <div className="w-screen h-24 shadow-md shadow-gray-400 bg-transparent flex items-center justify-between px-10 border border-gray-300">
      <div className="images w-24 flex items-center">
        <img src={logo} alt="House World Logo" />
        <h3 className=" text-red-600 text-4xl font-extrabold flex items-center justify-center">
          HOUSE WORLD
        </h3>
      </div>

      <div className="search flex items-center justify-center mx-8 w-1/2">
        <input
          className="rounded-full px-8 py-3 text-xl text-center border-2 border-gray-500"
          type="text"
          placeholder="Search Your 🏠 World"
          aria-label="Search your house world"
        />
        <button
          className="btn mx-4 p-2 text-xl font-bold text-white flex items-center justify-center border border-red-600 rounded-full bg-red-600 hover:bg-white hover:text-red-600 hover:border-red-600 cursor-pointer"
          aria-label="Search"
        >
          <IoSearchSharp className="mr-1 text-current hover:text-red-600" />
          Search
        </button>
      </div>

      <div className="list flex items-center justify-center">
        <p className="text-xl text-gray-600">List Your Home</p>
        <button className="mx-4 flex items-center border-2 border-gray-300 rounded-full px-2 py-2 justify-center">
          <GiHamburgerMenu size={24} className="mr-2" />
          <FaRegUserCircle size={24} className="ml-2" />
        </button>
      </div>
    </div>
  );
};

export default Nav;

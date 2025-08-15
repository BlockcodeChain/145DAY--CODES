import Heading from "./Component/Heading/Heading";
import Search from "./Component/Search/Search";


const App = () => {
  return (
    <div className="w-screen h-screen bg-white text-black dark:bg-black dark:text-white duration-300 transition-all">
      <Heading />
   
      <Search />
    </div>
  );
};
export default App;

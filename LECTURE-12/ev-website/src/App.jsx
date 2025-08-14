import React, { useState } from 'react';
import Background from './Components/Background/Background';
import Nav from './Components/Nav/Nav';
import Hero from './Components/Hero/Hero';

const App = () => {
  const heroSlides = [
    {
      text1: "Dive into",
      text2: "what you love",
      images: [0, 1, 2] // just used for dots count
    },
    {
      text1: "Indulge",
      text2: "your passions",
      images: [0, 1, 2]
    },
    {
      text1: "Give in to",
      text2: "your passions",
      images: [0, 1, 2]
    },
  ];

  const [countimage, setcountimage] = useState(0);
  const [play, setplay] = useState(false);

  return (
    <div className="relative w-full h-screen overflow-hidden">
      {/* Nav */}
      <Nav />

      {/* Background */}
      <Background play={play} count={countimage} />

      {/* Hero */}
      <Hero
        herodata={heroSlides[countimage]}
        play={play}
        setplay={setplay}
        setcountimage={setcountimage}
        countimage={countimage}
      />
    </div>
  );
};

export default App;

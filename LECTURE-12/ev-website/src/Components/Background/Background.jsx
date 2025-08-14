import video1 from '../../Assets/video1.mp4';
import image1 from '../../Assets/image1.png';
import image2 from '../../Assets/image2.png';
import image3 from '../../Assets/image3.png';

const Background = ({ play, count }) => {
  const images = [image1, image2, image3];

  return (
    <div className="absolute top-0 left-0 w-full h-full overflow-hidden z-[-1]">
      {play ? (
        <video autoPlay loop muted className="w-full h-full object-cover">
          <source src={video1} type="video/mp4" />
        </video>
      ) : (
        <img
          src={images[count]}
          alt="Background"
          className="w-full h-full object-cover"
        />
      )}
    </div>
  );
};

export default Background;

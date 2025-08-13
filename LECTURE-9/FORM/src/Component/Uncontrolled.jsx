import { useRef } from "react";

const Uncontrolled = () => {
  const emailref = useRef();
  const nameref = useRef();
  const passwordref = useRef();

  const handleSubmit = (e) => {
    e.preventDefault();
    const name = nameref.current.value;
    const password = passwordref.current.value;
    const email = emailref.current.value;

    console.log("Name:", name);
    console.log("Password:", password);
    console.log("Email:", email);

    // You can do other things here, like form validation or API calls
  };

  return (
    <div>
      <h1>Uncontrolled Form</h1>
      <form onSubmit={handleSubmit}>
        <input
          type="text"
          placeholder="Enter your Name"
          ref={nameref}
        />
        <br />
        <br />
        <input
          type="password"
          placeholder="Password"
          ref={passwordref}
        />
        <br />
        <br />
        <input
          type="email"
          placeholder="Email"
          ref={emailref}
        />
        <br />
        <br />
        <button type="submit">Submit</button>
      </form>
    </div>
  );
};

export default Uncontrolled;

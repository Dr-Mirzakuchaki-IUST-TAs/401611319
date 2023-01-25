
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
USE ieee.numeric_std.ALL;
 
ENTITY ad9255tb32 IS
END ad9255tb32;
 
ARCHITECTURE behavior OF ad9255tb32 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT spi_3_wire_master
    PORT(
         clock : IN  std_logic;
         reset_n : IN  std_logic;
         enable : IN  std_logic;
         cpol : IN  std_logic;
         cpha : IN  std_logic;
         clk_div : IN  integer;
         addr : IN  integer;
         rw : IN  std_logic;
         tx_cmd : IN  std_logic_vector(15 downto 0);
         tx_data : IN  std_logic_vector(31 downto 0);
         sclk : buffer  std_logic;
         ss_n : buffer  std_logic_vector(0 downto 0);
         sdio : INOUT  std_logic;
         busy : OUT  std_logic;
         rx_data : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal reset_n : std_logic := '0';
   signal enable : std_logic := '0';
   signal cpol : std_logic := '0';
   signal cpha : std_logic := '0';
   signal clk_div : integer := 0;
   signal addr : integer := 0;
   signal rw : std_logic := '0';
   signal tx_cmd : std_logic_vector(15 downto 0) := (others => '0');
   signal tx_data : std_logic_vector(31 downto 0) := (others => '0');

	--BiDirs
   signal sdio : std_logic;

 	--Outputs
   signal sclk : std_logic;
   signal ss_n : std_logic_vector(0 downto 0);
   signal busy : std_logic;
   signal rx_data : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clock_period : time := 20 ns;
 
   constant sclk_period : time := 40 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: spi_3_wire_master PORT MAP (
          clock => clock,
          reset_n => reset_n,
          enable => enable,
          cpol => cpol,
          cpha => cpha,
          clk_div => clk_div,
          addr => addr,
          rw => rw,
          tx_cmd => tx_cmd,
          tx_data => tx_data,
          sclk => sclk,
          ss_n => ss_n,
          sdio => sdio,
          busy => busy,
          rx_data => rx_data
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 
  

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

         reset_n<='1' ;
	  enable <='1' ;
	  cpol<='0' ;
	  cpha<='0' ;
	  tx_cmd<="0110010101100111" ;
	  tx_data <= "00000000111111110101010100001111" ;

      wait;
   end process;

END;

object FormKarkulyatsiya: TFormKarkulyatsiya
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormKarkulyatsiya'
  ClientHeight = 672
  ClientWidth = 1194
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -21
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 25
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1194
    Height = 83
    Align = alTop
    TabOrder = 0
    object Button1: TButton
      Left = 32
      Top = 17
      Width = 200
      Height = 60
      Caption = 'Qo'#39'shish'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 264
      Top = 17
      Width = 200
      Height = 60
      Caption = 'O'#39'zgartirish'
      TabOrder = 1
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 496
      Top = 17
      Width = 200
      Height = 60
      Caption = 'O'#39'chirish'
      TabOrder = 2
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 720
      Top = 17
      Width = 200
      Height = 60
      Caption = 'Tozalash'
      TabOrder = 3
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 968
      Top = 17
      Width = 200
      Height = 60
      Caption = 'Hammasi'
      TabOrder = 4
      OnClick = Button5Click
    end
  end
  object DBGrid1: TDBGrid
    Left = 296
    Top = 83
    Width = 898
    Height = 477
    Align = alRight
    DataSource = DataModule2.DataSourceKarkulyatsiya
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -21
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'id'
        Title.Alignment = taCenter
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 't_id'
        Title.Alignment = taCenter
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Nomi'
        Title.Alignment = taCenter
        Width = 277
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Narxi'
        Title.Alignment = taCenter
        Width = 153
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Miqdor'
        Title.Alignment = taCenter
        Width = 142
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Summa'
        Title.Alignment = taCenter
        Width = 161
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Birligi'
        Title.Alignment = taCenter
        Width = 137
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Turi'
        Title.Alignment = taCenter
        Visible = False
      end>
  end
  object Panel2: TPanel
    Left = 0
    Top = 560
    Width = 1194
    Height = 112
    Align = alBottom
    TabOrder = 2
    object Label2: TLabel
      Left = 944
      Top = 24
      Width = 13
      Height = 25
      Caption = '0'
    end
    object Label1: TLabel
      Left = 771
      Top = 23
      Width = 149
      Height = 25
      Caption = 'Jami Summa :'
    end
    object FlowPanel1: TFlowPanel
      Left = 1
      Top = 1
      Width = 704
      Height = 110
      Align = alLeft
      TabOrder = 0
      object Label3: TLabel
        Left = 1
        Top = 1
        Width = 13
        Height = 25
        Caption = '0'
      end
      object Label4: TLabel
        Left = 14
        Top = 1
        Width = 18
        Height = 25
        Caption = '   '
      end
      object Label5: TLabel
        Left = 32
        Top = 1
        Width = 145
        Height = 25
        Caption = 'Masalliqlari --'
      end
      object Edit1: TEdit
        Left = 177
        Top = 1
        Width = 130
        Height = 31
        Alignment = taCenter
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        Visible = False
      end
    end
  end
  object DBGrid2: TDBGrid
    Left = 0
    Top = 83
    Width = 297
    Height = 477
    Align = alLeft
    DataSource = DataModule2.DataSourceTovarlar
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -21
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    OnCellClick = DBGrid2CellClick
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'id'
        Title.Alignment = taCenter
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Nomi'
        Title.Alignment = taCenter
        Width = 276
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Narxi'
        Title.Alignment = taCenter
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Kategoriya'
        Title.Alignment = taCenter
        Visible = False
      end>
  end
end
